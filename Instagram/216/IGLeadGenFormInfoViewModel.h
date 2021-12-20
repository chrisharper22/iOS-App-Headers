//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGLeadGenFormInfoViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_pageName;
    NSString *_profilePictureURL;
    NSString *_heroMediaURL;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *heroMediaURL; // @synthesize heroMediaURL=_heroMediaURL;
@property(readonly, copy, nonatomic) NSString *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(readonly, copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPageName:(id)arg1 profilePictureURL:(id)arg2 heroMediaURL:(id)arg3 title:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

