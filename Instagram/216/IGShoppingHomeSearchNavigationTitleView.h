//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGShoppingHomeHeaderWithSearchBarView-Protocol.h"

@class IGSearchBar, NSString, UILabel;

@interface IGShoppingHomeSearchNavigationTitleView : UIView <IGShoppingHomeHeaderWithSearchBarView>
{
    UILabel *_titleLabel;
    _Bool _shouldAlwaysShowSearchBar;
    IGSearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)animateSearchBar:(_Bool)arg1;
@property(nonatomic) _Bool shouldAlwaysShowSearchBar; // @synthesize shouldAlwaysShowSearchBar=_shouldAlwaysShowSearchBar;
- (void)_fadeBetweenSearchBarAndTitleWithSearchBarAlpha:(double)arg1;
- (id)_getNavigationBar;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 searchBarConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

