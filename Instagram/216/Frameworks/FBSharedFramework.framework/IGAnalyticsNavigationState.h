//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IGAnalyticsNavigationState : NSObject
{
    NSMutableArray *_navEvents;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *navEvents;
- (void)setViewControllers:(id)arg1 navExtras:(id)arg2;
- (void)popViewController:(id)arg1;
- (void)pushViewController:(id)arg1 navExtras:(id)arg2;
- (void)pushViewController:(id)arg1;
- (id)init;

@end

