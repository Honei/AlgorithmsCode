%ʹ��matlab��ȡ����������
%inf�Ƕ�ȡ���ļ���ĩβ
clear;
fid = fopen('file.dat', 'r');
data = fread(fid, inf, 'double');

% while feof(fid)==0
%     
% [readdata, count] = fread(fid, 50, 'double');
%     if count < 50
%          readdata = readdata(1:count);
%         data = [data;readdata];
%     break;
%     else
%         data = [data;readdata];
%     end
% end
