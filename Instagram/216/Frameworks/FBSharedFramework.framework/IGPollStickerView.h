//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGEditableStickerViewType-Protocol.h>
#import <FBSharedFramework/IGPollStickerVoteViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryTextEntryTextViewDelegate-Protocol.h>

@class IGPollStickerEditableVoteView, IGPollStickerModel, IGStoryRichTextEntryTextView, IGStoryStickerExportModel, NSString;
@protocol IGPollStickerViewDismissDelegate, IGPollStickerViewTitleTextViewDelegate;

@interface IGPollStickerView : UIView <IGStoryTextEntryTextViewDelegate, IGPollStickerVoteViewDelegate, IGStickerViewType, IGConstrainedSizeStickerViewType, IGEditableStickerViewType>
{
    IGPollStickerModel *_pollStickerModel;
    _Bool _constrainWithBoundingBox;
    id <IGPollStickerViewTitleTextViewDelegate> _titleDelegate;
    id <IGPollStickerViewDismissDelegate> _dismissDelegate;
    IGStoryRichTextEntryTextView *_textView;
    IGPollStickerEditableVoteView *_voteView;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGPollStickerEditableVoteView *voteView; // @synthesize voteView=_voteView;
@property(readonly, nonatomic) IGStoryRichTextEntryTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <IGPollStickerViewDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) __weak id <IGPollStickerViewTitleTextViewDelegate> titleDelegate; // @synthesize titleDelegate=_titleDelegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) unsigned long long editableStickerType;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (_Bool)stickerPinningDisabled;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)outlinePath;
- (void)pollStickerVoteViewDidRequestDismiss:(id)arg1;
- (void)pollStickerVoteView:(id)arg1 willBeginEditingTextView:(id)arg2;
- (void)textEntryTextViewDidChange:(id)arg1;
- (_Bool)textEntryTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textEntryTextViewDidEndEditing:(id)arg1;
- (_Bool)textEntryTextViewShouldBeginEditing:(id)arg1;
- (void)setPlaceholderHidden:(_Bool)arg1;
- (void)setTextInputEnabled:(_Bool)arg1;
- (void)configureWithPollStickerModel:(id)arg1;
@property(readonly, nonatomic) IGPollStickerModel *stickerModel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

