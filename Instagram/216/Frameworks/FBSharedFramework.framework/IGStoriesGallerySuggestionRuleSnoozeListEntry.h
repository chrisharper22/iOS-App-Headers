//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface IGStoriesGallerySuggestionRuleSnoozeListEntry : NSObject <NSSecureCoding>
{
    NSString *_ruleIdentifier;
    NSDate *_dateAdded;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, nonatomic) NSString *ruleIdentifier; // @synthesize ruleIdentifier=_ruleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRuleIdentifier:(id)arg1 dateAdded:(id)arg2;

@end
