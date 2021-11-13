frost_setup;

%%
param = load('local/tmp_gait.mat');

gait = param.gait;

msg = getJointMsgASTRo();

ts = [gait(1).tspan, gait(3).tspan];

states = [gait(1).states.x, gait(3).states.x];

R = [zeros(3), -eye(3); -eye(3), zeros(3)];
R = kron(eye(2), R);

%%
rosinit;

pub = rospublisher('/joint_states');

r = rosrate(200);
%% realtime
for j = 1:25
    
    i = 1;

    t0 = tic;
    msg.Position = states(7:end, 1);

    while i < length(ts)
        t = toc(t0);
        if t >= ts(i + 1)
            i = i + 1;
            msg.Position = states(7:end, i);
        end
        msg.Header.Stamp = rostime('now');
        pub.send(msg);
        waitfor(r);
    end

    i = 1;

    t0 = tic;
    msg.Position = states(7:end, 1);

    while i < length(ts)
        t = toc(t0);
        if t >= ts(i + 1)
            i = i + 1;
            msg.Position = R*states(7:end, i);
        end
        msg.Header.Stamp = rostime('now');
        pub.send(msg);
        waitfor(r);
    end
end

%% slomo
r = rosrate(4);

for i = 1:length(ts)
    msg.Position = states(7:end, i);
    msg.Header.Stamp = rostime('now');
    pub.send(msg);
    waitfor(r);
end

for i = 1:length(ts)
    msg.Position = R*states(7:end, i);
    msg.Header.Stamp = rostime('now');
    pub.send(msg);
    waitfor(r);
end


%%
rosshutdown;
