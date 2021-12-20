//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCollectionViewCell.h>

#import "IGFundraiserFeedSharingSuggestionHScrollDelegate-Protocol.h"

@class IGFundraiserFeedSharingSuggestionHScrollView, IGFundraiserFeedSharingTitleControlForCreateCell, IGTableLayoutSpec, NSArray, NSString;
@protocol IGFundraiserFeedSharingCreateCellDelegate;

@interface IGFundraiserFeedSharingCreateCell : IGCollectionViewCell <IGFundraiserFeedSharingSuggestionHScrollDelegate>
{
    NSArray *_nonprofits;
    id <IGFundraiserFeedSharingCreateCellDelegate> _delegate;
    IGFundraiserFeedSharingSuggestionHScrollView *_suggestionView;
    IGFundraiserFeedSharingTitleControlForCreateCell *_titleView;
    IGTableLayoutSpec *_tableInterface;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(retain, nonatomic) IGFundraiserFeedSharingTitleControlForCreateCell *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) IGFundraiserFeedSharingSuggestionHScrollView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(nonatomic) __weak id <IGFundraiserFeedSharingCreateCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *nonprofits; // @synthesize nonprofits=_nonprofits;
- (void)fundraiserSuggestionHScrollDelegateDidShowCell:(id)arg1;
- (void)fundraiserSuggestionHScrollDelegateDidTapSearch;
- (void)fundraiserSuggestionHScrollDelegateDidSelectNonprofit:(id)arg1;
- (void)_onAddFundraiserTitleViewTap;
- (void)_setupSuggestionView;
- (double)cellHeight:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

