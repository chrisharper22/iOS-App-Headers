//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMinimizableContext;

@protocol IGMinimizableContextDelegate <NSObject>
- (id)minimizableContextSharedObject;
- (void)minimizableContextDidMinimizeWithSharedObject:(id)arg1;
- (void)minimizableContextDidMaximizeWithSharedObject:(id)arg1;
- (void)minimizableContextWillMinimizeWithSharedObject:(id)arg1;
- (void)minimizableContextWillMaximizeWithSharedObject:(id)arg1;
- (_Bool)minimizableContextCanMaximize;
- (_Bool)minimizableContextCanMinimize;
- (void)minimizableContextDidBegin:(IGMinimizableContext *)arg1;
@end

