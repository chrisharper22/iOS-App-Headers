//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSmartStickerModelType-Protocol.h>
#import <FBSharedFramework/IGStickerModelType-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class IGStaticStickerSingleModel, NSArray, NSString;

@interface IGITakeCareStickerModel : NSObject <IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSSecureCoding>
{
    NSString *_pk;
    IGStaticStickerSingleModel *_sticker;
    NSArray *_keywords;
    NSString *_helpText;
    NSString *_prompt;
    NSString *_placeholder;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(readonly, nonatomic) NSString *helpText; // @synthesize helpText=_helpText;
@property(readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, nonatomic) IGStaticStickerSingleModel *sticker; // @synthesize sticker=_sticker;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (unsigned long long)smartStickerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) _Bool includeInRecent;
- (id)initWithSticker:(id)arg1 keywords:(id)arg2 helpText:(id)arg3 prompt:(id)arg4 placeholder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

