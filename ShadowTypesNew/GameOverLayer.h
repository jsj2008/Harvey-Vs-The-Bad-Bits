//
//  GameOverLayer.h
//  ShadowTypesNew
//
//  Created by Jason Lagaac on 30/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor {
  CCLayer *scoreLayer;
  CCLayer *killsLayer;
  CCLayer *achievementsLayer;
}

@end