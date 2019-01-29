//
//  NewsTicker.h
//  Protocol_Intro
//
//  Created by Markus on 2019-01-25.
//  Copyright © 2019 The App Factory AB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NewsTickerDelegate.h"

@interface NewsTicker : NSObject

@property (assign) id<NewsTickerDelegate> tickerDelegate;

- (void)start;

@end
