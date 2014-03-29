//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Yuan Yinhuan on 14-3-29.
//  Copyright (c) 2014年 Yuan Yinhuan. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast
    + (NSDictionary *)JSONKeyPathsByPropertyKey {
        // 1
        NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
        // 2
        paths[@"tempHigh"] = @"temp.max";
        paths[@"tempLow"] = @"temp.min";
        // 3
        return paths;
    }
@end
