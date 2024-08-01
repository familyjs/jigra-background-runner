import { registerPlugin } from '@jigra/core';

import type { BackgroundRunnerPlugin } from './definitions';

const BackgroundRunner = registerPlugin<BackgroundRunnerPlugin>(
  'BackgroundRunner',
  {
    web: () => import('./web').then(m => new m.BackgroundRunnerWeb()),
  },
);

export * from './definitions';
export * from './apis';

export { BackgroundRunner };
