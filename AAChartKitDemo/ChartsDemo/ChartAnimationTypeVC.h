
//  SpecialChartVC.m
//  AAChartKit
//
//  Created by An An on 17/3/23.
//  Copyright © 2017年 An An. All rights reserved.
//*************** ...... SOURCE CODE ...... ***************
//***...................................................***
//*** https://github.com/AAChartModel/AAChartKit        ***
//*** https://github.com/AAChartModel/AAChartKit-Swift  ***
//***...................................................***
//*************** ...... SOURCE CODE ...... ***************

/*
 
 * -------------------------------------------------------------------------------
 *
 * 🌕 🌖 🌗 🌘  ❀❀❀   WARM TIPS!!!   ❀❀❀ 🌑 🌒 🌓 🌔
 *
 * Please contact me on GitHub,if there are any problems encountered in use.
 * GitHub Issues : https://github.com/AAChartModel/AAChartKit/issues
 * -------------------------------------------------------------------------------
 * And if you want to contribute for this project, please contact me as well
 * GitHub        : https://github.com/AAChartModel
 * StackOverflow : https://stackoverflow.com/users/12302132/codeforu
 * JianShu       : https://www.jianshu.com/u/f1e6753d4254
 * SegmentFault  : https://segmentfault.com/u/huanghunbieguan
 *
 * -------------------------------------------------------------------------------
 
 */

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,ChartAnimationTypeVCChartType) {
    ChartAnimationTypeVCChartTypeColumn = 0,
    ChartAnimationTypeVCChartTypeBar,
    ChartAnimationTypeVCChartTypeArea,
    ChartAnimationTypeVCChartTypeAreaspline,
    ChartAnimationTypeVCChartTypeLine,
    ChartAnimationTypeVCChartTypeSpline,
    ChartAnimationTypeVCChartTypeStepLine,
    ChartAnimationTypeVCChartTypeStepArea,
    ChartAnimationTypeVCChartTypeScatter,
    ChartAnimationTypeVCChartTypePie,

};

@interface ChartAnimationTypeVC : UIViewController

@property (nonatomic, assign) ChartAnimationTypeVCChartType chartType;

@end
