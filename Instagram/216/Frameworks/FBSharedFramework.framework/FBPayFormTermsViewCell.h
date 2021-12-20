//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/FBPayCoreTextViewDelegate-Protocol.h>

@class FBPayCoreTextView, FBPayFormTermsCellViewModel, NSString;
@protocol FBPayFormTermsViewCellDelegate;

@interface FBPayFormTermsViewCell : UICollectionViewCell <FBPayCoreTextViewDelegate>
{
    FBPayFormTermsCellViewModel *_viewModel;
    FBPayCoreTextView *_termsView;
    id <FBPayFormTermsViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayFormTermsViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

