//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDeletable-Protocol.h>

@class IGQuestionAnswerStickerResponder, IGStoryStickerExportModel, NSString, UILabel;

@interface IGQuestionAnswerResharedResponseStickerView : UIView <IGStickerViewType, IGStoryStickerDeletable>
{
    UIView *_questionContainerView;
    UIView *_responseContainerView;
    UILabel *_questionContextLabel;
    UILabel *_questionLabel;
    UILabel *_responseContextLabel;
    UILabel *_responseLabel;
    _Bool _isNonDeletable;
    IGQuestionAnswerStickerResponder *_model;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGQuestionAnswerStickerResponder *model; // @synthesize model=_model;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (_Bool)isDraftSupported;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

