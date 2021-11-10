#ifndef __KALMAN_H__
#define __KALMAN_H__


//1. 结构体类型定义
typedef struct
{
    double LastP;//上次估算协方差 初始化值为0.02
    double Now_P;//当前估算协方差 初始化值为0
    double out;//卡尔曼滤波器输出 初始化值为0
    double Kg;//卡尔曼增益 初始化值为0
    double Q;//过程噪声协方差 初始化值为0.001
    double R;//观测噪声协方差 初始化值为0.543
} KFP; //Kalman Filter parameter

double kalmanFilter(KFP *kfp,double input);

#endif

