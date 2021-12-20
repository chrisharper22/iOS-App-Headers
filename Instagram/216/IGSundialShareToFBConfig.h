//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IGSundialShareToFBConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _defaultShareToFBEnabled;
    _Bool _showShareToFBPromptInCreationFlow;
    _Bool _showShareToFBPromptInMediaViewer;
    _Bool _reuseOnFbEnabled;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool reuseOnFbEnabled; // @synthesize reuseOnFbEnabled=_reuseOnFbEnabled;
@property(readonly, nonatomic) _Bool showShareToFBPromptInMediaViewer; // @synthesize showShareToFBPromptInMediaViewer=_showShareToFBPromptInMediaViewer;
@property(readonly, nonatomic) _Bool showShareToFBPromptInCreationFlow; // @synthesize showShareToFBPromptInCreationFlow=_showShareToFBPromptInCreationFlow;
@property(readonly, nonatomic) _Bool defaultShareToFBEnabled; // @synthesize defaultShareToFBEnabled=_defaultShareToFBEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDefaultShareToFBEnabled:(_Bool)arg1 showShareToFBPromptInCreationFlow:(_Bool)arg2 showShareToFBPromptInMediaViewer:(_Bool)arg3 reuseOnFbEnabled:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end
