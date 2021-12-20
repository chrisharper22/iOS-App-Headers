//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDiscoveryGridItem, IGKeywordSearchModel, IGListAdapter, IGListSectionController, NSArray, NSString;

@protocol IGDiscoveryBreatherSectionDelegate <NSObject>
- (_Bool)discoveryBreatherShouldShowEntityPageHeader;
- (NSString *)discoveryBreatherEntityPageName;
- (IGListSectionController *)discoveryBreatherNeighboringSectionControllerForSection:(long long)arg1;
- (void)discoveryBreatherSectionController:(IGListSectionController *)arg1 didSelectInterestKeyword:(IGKeywordSearchModel *)arg2;
- (void)discoveryBreatherSectionController:(IGListSectionController *)arg1 didSelectRelatedItems:(NSArray *)arg2 focusItem:(IGDiscoveryGridItem *)arg3 keyword:(IGKeywordSearchModel *)arg4 listAdapter:(IGListAdapter *)arg5;
- (void)discoveryBreatherSectionController:(IGListSectionController *)arg1 didShowRelatedItems:(NSArray *)arg2 forKeyword:(IGKeywordSearchModel *)arg3 style:(NSString *)arg4 listAdapter:(IGListAdapter *)arg5;
@end
