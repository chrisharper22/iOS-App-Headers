//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <FBSharedFramework/FBPayCoreTextViewDelegate-Protocol.h>

@class FBPayBottomSheetInfoCellModel, FBPayCoreTextView, NSString, UILabel;
@protocol FBPayBottomSheetInfoCellDelegate;

@interface FBPayBottomSheetInfoCell : UITableViewCell <FBPayCoreTextViewDelegate>
{
    FBPayBottomSheetInfoCellModel *_cellModel;
    UILabel *_headerLabel;
    UILabel *_subheaderLabel;
    UILabel *_descriptionLabel;
    FBPayCoreTextView *_descriptionTextView;
    id <FBPayBottomSheetInfoCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayBottomSheetInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)_constraintsForDescriptionTextView;
- (id)_constraintsForDescriptionLabel;
- (id)_constraintsForSubheaderLabel;
- (id)_constraintsForHeaderLabel;
- (void)_setupConstraints;
- (_Bool)_isDetailedBottomSheetCell;
- (void)_setupDescriptionTextView;
- (void)_setupDescriptionLabelIfNeeded;
- (void)_setupSubheaderLabelIfNeeded;
- (void)_setupHeaderLabelIfNeeded;
- (void)_setupViews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

