//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGServiceHostProviding-Protocol.h>

@class FBARServiceHostBase, IGUserSession;

@interface IGServiceHostLazyProvider : NSObject <IGServiceHostProviding>
{
    IGUserSession *_userSession;
    FBARServiceHostBase *_serviceHost;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithUserSession:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) FBARServiceHostBase *serviceHost;
- (id)initWithUserSession:(id)arg1;

@end

