//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGRegistrationAccountLinkingSACWelcomeStepController, IGRegistrationAccountLinkingWelcomeStepController, IGRegistrationPasswordStepController, IGRegistrationUsernameStepController, NSArray, NSMapTable, NSMutableArray;
@protocol IGRegistrationStepControllerProtocol;

@interface IGRegistrationStepProvider : NSObject
{
    NSArray *_steps;
    unsigned long long _currentStepIndex;
    NSMutableArray *_loadedStepControllers;
    NSMapTable *_stepControllerToIndexMap;
    IGRegistrationUsernameStepController *_loadedUsernameStepController;
    IGRegistrationPasswordStepController *_loadedPasswordStepController;
    IGRegistrationAccountLinkingWelcomeStepController *_loadedLinkingWelcomeStepController;
    IGRegistrationAccountLinkingSACWelcomeStepController *_loadedLinkingSACWelcomeStepController;
    id <IGRegistrationStepControllerProtocol> _loadedCALStepController;
    id <IGRegistrationStepControllerProtocol> _loadedCALAccountsStepController;
    id <IGRegistrationStepControllerProtocol> _loadedContactPointStepController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGRegistrationStepControllerProtocol> loadedContactPointStepController; // @synthesize loadedContactPointStepController=_loadedContactPointStepController;
@property(readonly, nonatomic) id <IGRegistrationStepControllerProtocol> loadedCALAccountsStepController; // @synthesize loadedCALAccountsStepController=_loadedCALAccountsStepController;
@property(readonly, nonatomic) id <IGRegistrationStepControllerProtocol> loadedCALStepController; // @synthesize loadedCALStepController=_loadedCALStepController;
@property(readonly, nonatomic) IGRegistrationAccountLinkingSACWelcomeStepController *loadedLinkingSACWelcomeStepController; // @synthesize loadedLinkingSACWelcomeStepController=_loadedLinkingSACWelcomeStepController;
@property(readonly, nonatomic) IGRegistrationAccountLinkingWelcomeStepController *loadedLinkingWelcomeStepController; // @synthesize loadedLinkingWelcomeStepController=_loadedLinkingWelcomeStepController;
@property(readonly, nonatomic) IGRegistrationPasswordStepController *loadedPasswordStepController; // @synthesize loadedPasswordStepController=_loadedPasswordStepController;
@property(readonly, nonatomic) IGRegistrationUsernameStepController *loadedUsernameStepController; // @synthesize loadedUsernameStepController=_loadedUsernameStepController;
- (void)_updateCurrentStepIndex;
- (void)_removeLastLoadedStepController;
@property(readonly, nonatomic) id <IGRegistrationStepControllerProtocol> firstLoadedStepController;
@property(readonly, nonatomic) id <IGRegistrationStepControllerProtocol> topLoadedStepController;
@property(readonly, nonatomic) id <IGRegistrationStepControllerProtocol> previousLoadedStepController;
- (void)returnToStepController:(id)arg1;
- (void)reset;
- (void)updateAfterBackStep;
- (id)jumpToAfterStepController:(Class)arg1 context:(id)arg2;
- (id)nextStepControllerForContext:(id)arg1;
- (id)initWithSteps:(id)arg1;

@end
