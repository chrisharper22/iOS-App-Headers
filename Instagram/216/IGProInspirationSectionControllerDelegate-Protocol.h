//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGProInspirationSectionController, NSArray;

@protocol IGProInspirationSectionControllerDelegate <NSObject>
- (void)proInspirationSectionController:(IGProInspirationSectionController *)arg1 didTapSeeMoreWithFeedItems:(NSArray *)arg2 sourceType:(unsigned long long)arg3;
- (void)proInspirationSectionController:(IGProInspirationSectionController *)arg1 didTapMedia:(IGMedia *)arg2 index:(long long)arg3 feedItems:(NSArray *)arg4 sourceType:(unsigned long long)arg5;
- (void)proInspirationSectionController:(IGProInspirationSectionController *)arg1 didTapHeadlineContentSourceType:(unsigned long long)arg2;
@end

