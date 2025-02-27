//
//  PageViewController.h
//  Defrag
//
//  Created by Steve Warren on 10/11/11.
//  Copyright (c) 2011 Funny Garbage. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "PageData.h"


@interface PageViewController : UIViewController
{
    PageData *pageData;
    NSDate *timeCreated;
}

@property (nonatomic, retain) PageData *pageData;
@property (nonatomic, retain) NSDate *timeCreated;

-(void)initWithPageData:(PageData *)data;
-(void)pageWillDisplay;
-(void)pageDidDisplay;

-(void)logLifetime;

@end
