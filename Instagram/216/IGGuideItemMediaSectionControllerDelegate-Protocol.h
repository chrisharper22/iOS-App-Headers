//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGGuideItemMediaSectionController, IGMedia, IGShoppingProductRepresentation;

@protocol IGGuideItemMediaSectionControllerDelegate <NSObject>
- (void)guideItemMediaSectionControllerDidSelectEditSettings:(IGGuideItemMediaSectionController *)arg1;
- (void)guideItemMediaSectionController:(IGGuideItemMediaSectionController *)arg1 didSelectRemoveProductFromGuide:(IGShoppingProductRepresentation *)arg2;
- (void)guideItemMediaSectionController:(IGGuideItemMediaSectionController *)arg1 didSelectRemoveMediaFromGuide:(IGMedia *)arg2;
- (void)guideItemMediaSectionController:(IGGuideItemMediaSectionController *)arg1 didSelectProductRepresentation:(IGShoppingProductRepresentation *)arg2;
- (void)guideItemMediaSectionController:(IGGuideItemMediaSectionController *)arg1 didSelectFeedItem:(IGMedia *)arg2;
@end
