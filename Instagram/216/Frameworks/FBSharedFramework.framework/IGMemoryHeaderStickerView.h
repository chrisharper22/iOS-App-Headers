//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDeletable-Protocol.h>

@class IGStoryStickerExportModel, IGStoryTextEntryTextView, NSArray, NSString, UIColor;

@interface IGMemoryHeaderStickerView : UIView <IGStickerViewType, IGStoryStickerDeletable>
{
    IGStoryTextEntryTextView *_headerTextView;
    IGStoryTextEntryTextView *_subheaderTextView;
    NSArray *_mentionedUsers;
    NSString *_loggingId;
    _Bool _isNonDeletable;
    UIColor *_textColor;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
+ (id)memoryStickerCellAnniversaryStickerWithYear:(long long)arg1;
+ (id)memoryStickerCellAnniversaryStickerWithDate:(id)arg1;
+ (id)friendAnniversaryStickerWithYear:(long long)arg1 user:(id)arg2;
+ (id)feedVideoAnniversaryStickerWithDate:(id)arg1;
+ (id)feedPhotoAnniversaryStickerWithDate:(id)arg1;
+ (id)storyAnniversaryStickerWithDate:(id)arg1 mentionedUsers:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)outlinePath;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithHeadline:(id)arg1 subheader:(id)arg2 mentionedUsers:(id)arg3 loggingId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
