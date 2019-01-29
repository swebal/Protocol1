//
//  NewsTicker.m
//  Protocol_Intro
//
//  Created by Markus on 2019-01-25.
//  Copyright © 2019 The App Factory AB. All rights reserved.
//

#import "NewsTicker.h"

@implementation NewsTicker

- (void)start {
    [NSTimer scheduledTimerWithTimeInterval:1.0 target:self selector:@selector(getNews) userInfo:nil repeats:true];
}

- (void)getNews {
    [_tickerDelegate newsArrived];
}

@end
