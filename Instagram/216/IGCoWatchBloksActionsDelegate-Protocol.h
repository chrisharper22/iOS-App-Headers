//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCoWatchBloksMedia, NSString;

@protocol IGCoWatchBloksActionsDelegate <NSObject>
- (void)coWatchBloksDidRequestNavigateBack;
- (void)coWatchBloksDidRequestNavigation:(NSString *)arg1 shouldMinimize:(_Bool)arg2 pushBloksController:(_Bool)arg3;
- (void)coWatchBloksDidSelectCoWatchBloksMedia:(IGCoWatchBloksMedia *)arg1;
@end

