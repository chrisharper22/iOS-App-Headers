//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;
@protocol FBIntentTarget;

@interface IGTagsListItemViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    NSString *_title;
    id <FBIntentTarget> _intentTarget;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBIntentTarget> intentTarget; // @synthesize intentTarget=_intentTarget;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 intentTarget:(id)arg3;

@end

