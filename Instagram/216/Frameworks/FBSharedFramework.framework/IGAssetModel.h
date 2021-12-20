//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSString;

@interface IGAssetModel : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_remoteUrlString;
    NSString *_version;
    NSString *_uncompressedLocalPath_DEPRECATED_DO_NOT_USE_OR_LIAM_NEESON_WILL_FIND_YOU_AND_HE_WILL_KILL_YOU;
    long long _compressionType;
    id _source;
    NSString *_cacheKey;
    NSString *_md5Hash;
    unsigned long long _fileSizeInBytes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long fileSizeInBytes; // @synthesize fileSizeInBytes=_fileSizeInBytes;
@property(readonly, copy, nonatomic) NSString *md5Hash; // @synthesize md5Hash=_md5Hash;
@property(readonly, copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) id source; // @synthesize source=_source;
@property(readonly, nonatomic) long long compressionType; // @synthesize compressionType=_compressionType;
@property(copy, nonatomic) NSString *uncompressedLocalPath_DEPRECATED_DO_NOT_USE_OR_LIAM_NEESON_WILL_FIND_YOU_AND_HE_WILL_KILL_YOU; // @synthesize uncompressedLocalPath_DEPRECATED_DO_NOT_USE_OR_LIAM_NEESON_WILL_FIND_YOU_AND_HE_WILL_KILL_YOU=_uncompressedLocalPath_DEPRECATED_DO_NOT_USE_OR_LIAM_NEESON_WILL_FIND_YOU_AND_HE_WILL_KILL_YOU;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *remoteUrlString; // @synthesize remoteUrlString=_remoteUrlString;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateWithConfig:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

