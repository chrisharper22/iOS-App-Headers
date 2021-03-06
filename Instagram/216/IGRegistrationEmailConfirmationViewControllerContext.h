//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGNUXLayoutSpec, NSString;
@protocol IGAPIClient;

@interface IGRegistrationEmailConfirmationViewControllerContext : FBValueObject <NSCopying, NSCoding>
{
    IGNUXLayoutSpec *_layoutSpec;
    NSString *_email;
    NSString *_encodedRegContext;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, copy, nonatomic) NSString *encodedRegContext; // @synthesize encodedRegContext=_encodedRegContext;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) IGNUXLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (id)initWithLayoutSpec:(id)arg1 email:(id)arg2 encodedRegContext:(id)arg3 networker:(id)arg4;

@end

