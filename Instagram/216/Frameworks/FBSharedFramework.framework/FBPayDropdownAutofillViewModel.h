//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface FBPayDropdownAutofillViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_titleText;
    long long _numSubsections;
    NSArray *_subsectionText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *subsectionText; // @synthesize subsectionText=_subsectionText;
@property(readonly, nonatomic) long long numSubsections; // @synthesize numSubsections=_numSubsections;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)initWithTitleText:(id)arg1 numSubsections:(long long)arg2 subsectionText:(id)arg3;

@end

