//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKLoginCompleting-Protocol.h>

@class FBSDKLoginCompletionParameters;
@protocol FBSDKAuthenticationTokenCreating, FBSDKGraphRequestConnectionFactory, NSObject;

@interface FBSDKLoginURLCompleter : NSObject <FBSDKLoginCompleting>
{
    _Bool _performExplicitFallback;
    id <NSObject> _observer;
    id <FBSDKGraphRequestConnectionFactory> _graphRequestConnectionFactory;
    id <FBSDKAuthenticationTokenCreating> _authenticationTokenCreator;
    FBSDKLoginCompletionParameters *_parameters;
}

+ (id)dateFormatter;
+ (id)challengeFromParameters:(id)arg1;
+ (id)dataAccessExpirationDateFromParameters:(id)arg1;
+ (id)expirationDateFromParameters:(id)arg1;
+ (id)profileWithClaims:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) FBSDKLoginCompletionParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) id <FBSDKAuthenticationTokenCreating> authenticationTokenCreator; // @synthesize authenticationTokenCreator=_authenticationTokenCreator;
@property(retain, nonatomic) id <FBSDKGraphRequestConnectionFactory> graphRequestConnectionFactory; // @synthesize graphRequestConnectionFactory=_graphRequestConnectionFactory;
@property(nonatomic) _Bool performExplicitFallback; // @synthesize performExplicitFallback=_performExplicitFallback;
@property(retain, nonatomic) id <NSObject> observer; // @synthesize observer=_observer;
- (void)exchangeNonceForTokenWithHandler:(CDUnknownBlockType)arg1 authenticationNonce:(id)arg2;
- (void)setErrorWithDictionary:(id)arg1;
- (void)setParametersWithDictionary:(id)arg1 appID:(id)arg2;
- (void)fetchAndSetPropertiesForParameters:(id)arg1 nonce:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)completeLoginWithHandler:(CDUnknownBlockType)arg1 nonce:(id)arg2;
- (void)completeLoginWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithURLParameters:(id)arg1 appID:(id)arg2 graphRequestConnectionFactory:(id)arg3 authenticationTokenCreator:(id)arg4;

@end
