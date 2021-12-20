//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface MBIMediaUploadConfig : NSObject <NSCoding, NSCopying>
{
    struct __MCFRuntimeBaseData _reserved;
    struct __MCFString *_protocol;
    struct __MCFString *_mediaCreationRequestPath;
    struct __MCFString *_mimeType;
    struct __MCFString *_fileName;
    struct __MCFString *_serverDedupeKey;
    struct __MCFString *_jobId;
    struct __MCFDictionary *_params;
    struct __MCFDictionary *_extraLoggingData;
    struct __MCFDictionary *_extraHeaders;
    struct __MCFString *_mailboxUserID;
    struct __MCFDictionary *_optionalConfig;
    struct __MCFDictionary *_urlParams;
}

+ (id)mediaUploadConfigWithProtocol:(id)arg1 mediaCreationRequestPath:(id)arg2 mimeType:(id)arg3 fileName:(id)arg4 serverDedupeKey:(id)arg5 jobId:(id)arg6 params:(id)arg7 extraLoggingData:(id)arg8 extraHeaders:(id)arg9 mailboxUserID:(id)arg10 optionalConfig:(id)arg11 urlParams:(id)arg12;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)urlParams;
- (id)optionalConfig;
- (id)mailboxUserID;
- (id)extraHeaders;
- (id)extraLoggingData;
- (id)params;
- (id)jobId;
- (id)serverDedupeKey;
- (id)fileName;
- (id)mimeType;
- (id)mediaCreationRequestPath;
- (id)protocol;

@end

