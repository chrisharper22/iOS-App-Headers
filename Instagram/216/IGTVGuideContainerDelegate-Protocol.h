//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTVGuideContainerViewController;

@protocol IGTVGuideContainerDelegate <NSObject>
- (_Bool)tvGuideContainerCanBeginInteractivePresentation:(IGTVGuideContainerViewController *)arg1;
- (void)tvGuideContainer:(IGTVGuideContainerViewController *)arg1 didUpdatePresentationProgress:(double)arg2;
- (void)tvGuideContainerDidDismiss:(IGTVGuideContainerViewController *)arg1;
- (void)tvGuideContainerWillDismiss:(IGTVGuideContainerViewController *)arg1;
- (void)tvGuideContainerWillPresent:(IGTVGuideContainerViewController *)arg1 isFromGesture:(_Bool)arg2;
@end

