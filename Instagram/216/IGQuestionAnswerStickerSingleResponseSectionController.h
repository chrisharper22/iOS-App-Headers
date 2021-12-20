//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGQuestionAnswerStickerResponder, IGUserSession;
@protocol IGQuestionAnswerStickerSingleResponseSectionControllerDelegate;

@interface IGQuestionAnswerStickerSingleResponseSectionController : IGListSectionController
{
    IGQuestionAnswerStickerResponder *_item;
    IGUserSession *_userSession;
    _Bool _footerHidden;
    _Bool _borderAlwaysHidden;
    id <IGQuestionAnswerStickerSingleResponseSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGQuestionAnswerStickerSingleResponseSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 footerHidden:(_Bool)arg2 borderAlwaysHidden:(_Bool)arg3;

@end

