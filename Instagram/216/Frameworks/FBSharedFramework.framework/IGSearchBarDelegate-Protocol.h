//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAnimatablePlaceholderModel, IGSearchBar, NSString;

@protocol IGSearchBarDelegate <NSObject>
- (void)searchBarDidTapReturnKey:(IGSearchBar *)arg1;
- (void)searchBar:(IGSearchBar *)arg1 didChangeSearchText:(NSString *)arg2;
- (_Bool)searchBarShouldBeginEditing:(IGSearchBar *)arg1;

@optional
- (void)searchBarVisualSearchButtonDidEnterViewport:(IGSearchBar *)arg1;
- (void)searchBar:(IGSearchBar *)arg1 didChangePlaceholder:(IGAnimatablePlaceholderModel *)arg2;
- (_Bool)searchBar:(IGSearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)searchBarDidTapClearButton:(IGSearchBar *)arg1;
- (void)searchBarDidEndEditing:(IGSearchBar *)arg1;
- (void)searchBarDidBeginEditing:(IGSearchBar *)arg1;
@end

