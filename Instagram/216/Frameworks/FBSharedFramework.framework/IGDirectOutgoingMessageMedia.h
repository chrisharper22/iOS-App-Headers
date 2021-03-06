//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGDirectOutgoingMessagePermanentMedia, IGDirectOutgoingMessageThirdPartyAnimatedMedia, IGDirectOutgoingVisualMedia;

@interface IGDirectOutgoingMessageMedia : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGDirectOutgoingMessagePermanentMedia *_permanentMedia;
    IGDirectOutgoingVisualMedia *_visualMedia;
    IGDirectOutgoingMessageThirdPartyAnimatedMedia *_thirdPartyAnimatedMedia;
}

+ (id)visualMedia:(id)arg1;
+ (id)thirdPartyAnimatedMedia:(id)arg1;
+ (id)permanentMedia:(id)arg1;
- (void).cxx_destruct;
- (void)matchPermanentMedia:(CDUnknownBlockType)arg1 visualMedia:(CDUnknownBlockType)arg2 thirdPartyAnimatedMedia:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanPermanentMedia:(CDUnknownBlockType)arg1 visualMedia:(CDUnknownBlockType)arg2 thirdPartyAnimatedMedia:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

