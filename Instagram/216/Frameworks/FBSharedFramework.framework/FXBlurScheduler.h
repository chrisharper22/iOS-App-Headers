//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FXBlurScheduler : NSObject
{
    _Bool _blurEnabled;
    _Bool _updating;
    NSMutableArray *_views;
    unsigned long long _viewIndex;
    unsigned long long _updatesEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(nonatomic) unsigned long long updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(nonatomic) unsigned long long viewIndex; // @synthesize viewIndex=_viewIndex;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
- (void)updateAsynchronously;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)setUpdatesDisabled;
- (void)setUpdatesEnabled;
- (id)init;

@end
