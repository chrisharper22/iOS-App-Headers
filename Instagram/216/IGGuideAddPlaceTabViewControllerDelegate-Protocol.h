//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGGuideAddPlaceTabViewController, IGGuideMedia, IGLocation;

@protocol IGGuideAddPlaceTabViewControllerDelegate <NSObject>
- (void)addSpotTabViewControllerDidCancel:(IGGuideAddPlaceTabViewController *)arg1;
- (void)addSpotTabViewController:(IGGuideAddPlaceTabViewController *)arg1 didSelectLocation:(IGLocation *)arg2 withGuideMedia:(IGGuideMedia *)arg3;
@end

