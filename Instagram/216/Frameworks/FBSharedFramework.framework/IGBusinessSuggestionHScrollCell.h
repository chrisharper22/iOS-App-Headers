//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IGSuggestionHScrollView;
@protocol IGSuggestionHScrollViewDataSource, IGSuggestionHScrollViewDelegate;

@interface IGBusinessSuggestionHScrollCell : UITableViewCell
{
    IGSuggestionHScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSuggestionHScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)reload;
@property(nonatomic) __weak id <IGSuggestionHScrollViewDelegate> delegate;
@property(nonatomic) __weak id <IGSuggestionHScrollViewDataSource> dataSource;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
