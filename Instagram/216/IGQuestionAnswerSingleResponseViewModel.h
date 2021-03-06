//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGQuestionAnswerStickerResponder;

@interface IGQuestionAnswerSingleResponseViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _isResponderRestricted;
    IGQuestionAnswerStickerResponder *_responder;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isResponderRestricted; // @synthesize isResponderRestricted=_isResponderRestricted;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, copy, nonatomic) IGQuestionAnswerStickerResponder *responder; // @synthesize responder=_responder;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithResponder:(id)arg1 contentInset:(struct UIEdgeInsets)arg2 isResponderRestricted:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

