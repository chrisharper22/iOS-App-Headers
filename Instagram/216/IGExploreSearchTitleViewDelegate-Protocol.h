//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAnimatablePlaceholderModel, IGExploreSearchTitleView, NSArray, NSString, UIView;

@protocol IGExploreSearchTitleViewDelegate <NSObject>
- (unsigned long long)searchBarConfigurationForSearchTitleView:(IGExploreSearchTitleView *)arg1;
- (NSArray *)animationPlaceHoldersForSearchTitleView:(IGExploreSearchTitleView *)arg1;
- (void)searchTitleViewDidClickSearchButton:(IGExploreSearchTitleView *)arg1;
- (void)searchTitleViewDidRequestSearchDismissal:(IGExploreSearchTitleView *)arg1;
- (void)searchTitleViewDidRequestSearchPresentation:(IGExploreSearchTitleView *)arg1;
- (void)searchTitleView:(IGExploreSearchTitleView *)arg1 didChangePlaceholder:(IGAnimatablePlaceholderModel *)arg2;
- (void)searchTitleView:(IGExploreSearchTitleView *)arg1 didSelectBackButton:(UIView *)arg2;
- (void)searchTitleView:(IGExploreSearchTitleView *)arg1 didSelectDiscoverPeopleButton:(UIView *)arg2;
- (void)searchTitleView:(IGExploreSearchTitleView *)arg1 didSelectMapButton:(UIView *)arg2;
- (void)searchTitleView:(IGExploreSearchTitleView *)arg1 didUpdateText:(NSString *)arg2;
@end

