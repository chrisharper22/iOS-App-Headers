//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKGraphRequest-Protocol.h>

@class NSDictionary, NSString;
@protocol FBSDKGraphRequestConnectionFactory;

@interface FBSDKGraphRequest : NSObject <FBSDKGraphRequest>
{
    NSString *HTTPMethod;
    unsigned long long flags;
    NSDictionary *_parameters;
    NSString *_tokenString;
    NSString *_graphPath;
    NSString *_version;
    id <FBSDKGraphRequestConnectionFactory> _graphRequestConnectionFactory;
}

+ (void)configureWithSettings:(id)arg1 currentAccessTokenStringProvider:(Class)arg2 graphRequestConnectionFactory:(id)arg3;
+ (void)setGraphRequestConnectionFactory:(id)arg1;
+ (id)graphRequestConnectionFactory;
+ (void)setAccessTokenProvider:(Class)arg1;
+ (Class)accessTokenProvider;
+ (void)setSettings:(id)arg1;
+ (id)settings;
+ (id)preprocessParams:(id)arg1;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 forBatch:(_Bool)arg4;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (_Bool)isAttachment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKGraphRequestConnectionFactory> graphRequestConnectionFactory; // @synthesize graphRequestConnectionFactory=_graphRequestConnectionFactory;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *graphPath; // @synthesize graphPath=_graphPath;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) unsigned long long flags; // @synthesize flags;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod;
- (id)formattedDescription;
- (id)description;
- (id)startWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasAttachments;
@property(nonatomic, getter=isGraphErrorRecoveryDisabled) _Bool graphErrorRecoveryDisabled;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 version:(id)arg4 HTTPMethod:(id)arg5;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 HTTPMethod:(id)arg4 version:(id)arg5 flags:(unsigned long long)arg6 graphRequestConnectionFactory:(id)arg7;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 HTTPMethod:(id)arg4 flags:(unsigned long long)arg5 graphRequestConnectionFactory:(id)arg6;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 HTTPMethod:(id)arg4 flags:(unsigned long long)arg5;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 flags:(unsigned long long)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2;
- (id)initWithGraphPath:(id)arg1 HTTPMethod:(id)arg2;
- (id)initWithGraphPath:(id)arg1;

@end

