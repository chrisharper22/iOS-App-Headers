//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGIntent, UIViewController;
@protocol IGStoryCreationViewControllerType;

@protocol IGStoryFullscreenSectionControllerBloksDelegate <NSObject>
- (void)setStoryCreationNavigationDelegate:(UIViewController<IGStoryCreationViewControllerType> *)arg1;
- (void)storyItemForceOpenReshare;
- (void)handleUserScopedIntentFromBloks:(IGIntent *)arg1;
- (void)tryResumePlaybackFromBloks;
@end
