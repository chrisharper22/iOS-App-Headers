//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGComposition, IGMediaMetadata;

@interface IGDraftData : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGMediaMetadata *_mediaMetadata;
    IGComposition *_composition;
}

+ (id)mediaMetadata:(id)arg1;
+ (id)composition:(id)arg1;
- (void).cxx_destruct;
- (void)matchMediaMetadata:(CDUnknownBlockType)arg1 composition:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanMediaMetadata:(CDUnknownBlockType)arg1 composition:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

