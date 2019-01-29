//
//  ViewController.h
//  Protocol_Intro
//
//  Created by Markus on 2019-01-25.
//  Copyright © 2019 The App Factory AB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewsTicker.h"
#import "NewsTickerDelegate.h"

@interface ViewController : UIViewController <NewsTickerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (strong) NewsTicker *ticker;

@end

