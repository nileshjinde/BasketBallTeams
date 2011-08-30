//
//  RootViewController.h
//  BasketBallTeams
//
//  Created by bhuvan khanna on 25/08/11.
//  Copyright 2011 webonise software solutions pvt ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController
{
    NSMutableArray *teams;   
}

@property(nonatomic,retain)NSMutableArray *teams;
@end

