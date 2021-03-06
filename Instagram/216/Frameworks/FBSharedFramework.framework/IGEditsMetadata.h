//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaMetadataProtocol-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface IGEditsMetadata : NSObject <IGMediaMetadataProtocol, NSSecureCoding, NSCopying>
{
    _Bool _isEdited;
    NSDictionary *_editsInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(readonly, nonatomic) NSDictionary *editsInfo; // @synthesize editsInfo=_editsInfo;
- (id)sharingInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEditsInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

