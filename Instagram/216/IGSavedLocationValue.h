//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "IGValue-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGSavedLocationValue : IGValueObject <IGValue, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (id)valueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

