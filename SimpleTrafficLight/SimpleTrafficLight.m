%% 
% Assignment1 "Simple Traffic light with 3 sec delay "

%draw the traffic shape
x=[-5,-5,5,5,-5];
y=[-20,20,20,-20,-20];
fill(x,y,[0,0,0]);
hold on;
plot (x,y,8*x,2*y-10,'k');
hold on ;
x=[-1,1,1,-1,-1];
y=[-20,-20,-35,-35,-20];
fill(x,y,'k');


%red , yellow and green circles
r=4;
theta = 1:0.1:360;
y1=r*sind(theta)+12;
x1=r*cosd(theta);

y2=r*sind(theta);
x2=r*cosd(theta);

y3=r*sind(theta)-12;
x3=r*cosd(theta);


while true
    fill(x3,y3,'k');
    plot(x2,y2,'y');
    plot(x3,y3,'g');
    fill(x1,y1,'r');
    pause(3);
    
    fill(x1,y1,'k');
    plot(x1,y1,'r');
    fill(x2,y2,'y');
    pause(3);
    
    fill(x2,y2,'k');
    plot(x2,y2,'y');
    fill(x3,y3,'g');
    pause(3);
end

