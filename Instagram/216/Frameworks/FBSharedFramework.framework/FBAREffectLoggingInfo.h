//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface FBAREffectLoggingInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _loggingEnabled;
    _Bool _preload;
    _Bool _isLegacyEffect;
    NSUUID *_operationsUniqueID;
    NSString *_effectID;
    NSString *_effectInstanceID;
    NSUUID *_effectSessionID;
    NSString *_productName;
    NSString *_productSessionID;
    NSString *_requestSource;
    NSString *_oneCameraActiveSessionID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLegacyEffect; // @synthesize isLegacyEffect=_isLegacyEffect;
@property(readonly, copy, nonatomic) NSString *oneCameraActiveSessionID; // @synthesize oneCameraActiveSessionID=_oneCameraActiveSessionID;
@property(readonly, copy, nonatomic) NSString *requestSource; // @synthesize requestSource=_requestSource;
@property(readonly, copy, nonatomic) NSString *productSessionID; // @synthesize productSessionID=_productSessionID;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(readonly, nonatomic) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(readonly, copy, nonatomic) NSUUID *effectSessionID; // @synthesize effectSessionID=_effectSessionID;
@property(readonly, copy, nonatomic) NSString *effectInstanceID; // @synthesize effectInstanceID=_effectInstanceID;
@property(readonly, copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(readonly, copy, nonatomic) NSUUID *operationsUniqueID; // @synthesize operationsUniqueID=_operationsUniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithOperationsUniqueID:(id)arg1 effectID:(id)arg2 effectInstanceID:(id)arg3 effectSessionID:(id)arg4 loggingEnabled:(_Bool)arg5 preload:(_Bool)arg6 productName:(id)arg7 productSessionID:(id)arg8 requestSource:(id)arg9 oneCameraActiveSessionID:(id)arg10 isLegacyEffect:(_Bool)arg11;
- (id)initWithOperationsUniqueID:(id)arg1 effectID:(id)arg2 effectInstanceID:(id)arg3 effectSessionID:(id)arg4 loggingEnabled:(_Bool)arg5 preload:(_Bool)arg6 productName:(id)arg7 productSessionID:(id)arg8 requestSource:(id)arg9 isLegacyEffect:(_Bool)arg10;
- (id)initWithOperationsUniqueID:(id)arg1 effectID:(id)arg2 effectInstanceID:(id)arg3 effectSessionID:(id)arg4 loggingEnabled:(_Bool)arg5 preload:(_Bool)arg6 productName:(id)arg7 productSessionID:(id)arg8 requestSource:(id)arg9;

@end

