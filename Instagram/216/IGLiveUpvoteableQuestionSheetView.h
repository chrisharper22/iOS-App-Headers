//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGLiveUpvoteableQuestionSheetEmptyViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IGLiveUpvoteableQuestionSheetEmptyView, NSString, UIActivityIndicatorView, UICollectionView, UILabel;
@protocol IGLiveUpvoteableQuestionSheetViewDelegate;

@interface IGLiveUpvoteableQuestionSheetView : UIView <UITextFieldDelegate, IGLiveUpvoteableQuestionSheetEmptyViewDelegate>
{
    UIView *_headerContainer;
    UILabel *_headerLabel;
    NSString *_broadcasterUsername;
    UIActivityIndicatorView *_activityIndicatorView;
    unsigned long long _entryPoint;
    UICollectionView *_collectionView;
    IGLiveUpvoteableQuestionSheetEmptyView *_emptyStateView;
    id <IGLiveUpvoteableQuestionSheetViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveUpvoteableQuestionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGLiveUpvoteableQuestionSheetEmptyView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)toggleLoading:(_Bool)arg1 emptySheet:(_Bool)arg2;
- (void)upvoteableQuestionSheetEmptyViewAskQuestionButtonTapped:(id)arg1;
- (void)upvoteableQuestionSheetEmptyView:(id)arg1 submitQuestion:(id)arg2;
- (void)layoutSubviews;
- (id)initWithEntryPoint:(unsigned long long)arg1 broadcasterUsername:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

